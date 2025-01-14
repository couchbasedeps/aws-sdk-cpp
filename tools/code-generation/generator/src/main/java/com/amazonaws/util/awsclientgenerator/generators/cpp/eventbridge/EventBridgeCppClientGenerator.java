/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

package com.amazonaws.util.awsclientgenerator.generators.cpp.eventbridge;

import com.amazonaws.util.awsclientgenerator.domainmodels.SdkFileEntry;
import com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.ServiceModel;
import com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.cpp.CppViewHelper;
import com.amazonaws.util.awsclientgenerator.generators.cpp.JsonCppClientGenerator;
import org.apache.velocity.Template;
import org.apache.velocity.VelocityContext;

import java.nio.charset.StandardCharsets;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

/**
 * Template specialization for EventBridge PutEvents API multi-regional endpoint support
 */
public class EventBridgeCppClientGenerator  extends JsonCppClientGenerator {

    public EventBridgeCppClientGenerator() throws Exception {
        super();
    }

    @Override
    public SdkFileEntry[] generateSourceFiles(ServiceModel serviceModel) throws Exception {
        return super.generateSourceFiles(serviceModel);
    }

    @Override
    protected List<SdkFileEntry> generateClientSourceFile(final List<ServiceModel> serviceModels) throws Exception {
        List<SdkFileEntry> sourceFiles = new ArrayList<>();
        Template template = velocityEngine.getTemplate("/com/amazonaws/util/awsclientgenerator/velocity/cpp/json/JsonServiceClientSource.vm", StandardCharsets.UTF_8.name());
        for (int i = 0; i < serviceModels.size(); i++) {
            VelocityContext context = createContext(serviceModels.get(i));
            context.put("CppViewHelper", CppViewHelper.class);

            // Store the flag of endpoint being overwritten in the config
            context.put("customEndpointUsed", true);
            // Instruct code gen to use DefaultAuthSignerProvider with SigV4A instead of default AWSAuthV4Signer
            context.put("multiRegionAccessPointSupported", true);

            final String fileName;
            if (i == 0) {
                context.put("onlyGeneratedOperations", false);
                fileName = String.format("source/%sClient.cpp", serviceModels.get(i).getMetadata().getClassNamePrefix());
            } else {
                context.put("onlyGeneratedOperations", true);
                fileName = String.format("source/%sClient%d.cpp", serviceModels.get(i).getMetadata().getClassNamePrefix(), i);
            }

            sourceFiles.add(makeFile(template, context, fileName, true));
        }
        return sourceFiles;
    }

    @Override
    protected SdkFileEntry generateClientHeaderFile(final ServiceModel serviceModel) throws Exception {
        Template template = velocityEngine.getTemplate("/com/amazonaws/util/awsclientgenerator/velocity/cpp/json/JsonServiceClientHeader.vm", StandardCharsets.UTF_8.name());

        VelocityContext context = createContext(serviceModel);
        context.put("CppViewHelper", CppViewHelper.class);

        if (serviceModel.getOperations().get("PutEvents").getRequest().getShape().getMembers().containsKey("EndpointId")) {
            // Store the flag of endpoint being overwritten in the config
            context.put("customEndpointUsed", true);
            // Instruct code gen to use DefaultAuthSignerProvider with SigV4A instead of default AWSAuthV4Signer
            context.put("multiRegionAccessPointSupported", true);
        }

        String fileName = String.format("include/aws/%s/%sClient.h", serviceModel.getMetadata().getProjectName(),
                serviceModel.getMetadata().getClassNamePrefix());

        return makeFile(template, context, fileName, true);
    }
}
