﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datasync/model/TaskStatus.h>
#include <aws/datasync/model/TaskMode.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace DataSync
{
namespace Model
{

  /**
   * <p>Represents a single entry in a list of tasks. <code>TaskListEntry</code>
   * returns an array that contains a list of tasks when the <a
   * href="https://docs.aws.amazon.com/datasync/latest/userguide/API_ListTasks.html">ListTasks</a>
   * operation is called. A task includes the source and destination file systems to
   * sync and the options to use for the tasks.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/TaskListEntry">AWS
   * API Reference</a></p>
   */
  class TaskListEntry
  {
  public:
    AWS_DATASYNC_API TaskListEntry();
    AWS_DATASYNC_API TaskListEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API TaskListEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the task.</p>
     */
    inline const Aws::String& GetTaskArn() const{ return m_taskArn; }
    inline bool TaskArnHasBeenSet() const { return m_taskArnHasBeenSet; }
    inline void SetTaskArn(const Aws::String& value) { m_taskArnHasBeenSet = true; m_taskArn = value; }
    inline void SetTaskArn(Aws::String&& value) { m_taskArnHasBeenSet = true; m_taskArn = std::move(value); }
    inline void SetTaskArn(const char* value) { m_taskArnHasBeenSet = true; m_taskArn.assign(value); }
    inline TaskListEntry& WithTaskArn(const Aws::String& value) { SetTaskArn(value); return *this;}
    inline TaskListEntry& WithTaskArn(Aws::String&& value) { SetTaskArn(std::move(value)); return *this;}
    inline TaskListEntry& WithTaskArn(const char* value) { SetTaskArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the task.</p>
     */
    inline const TaskStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const TaskStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(TaskStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline TaskListEntry& WithStatus(const TaskStatus& value) { SetStatus(value); return *this;}
    inline TaskListEntry& WithStatus(TaskStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the task.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline TaskListEntry& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline TaskListEntry& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline TaskListEntry& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The task mode that you're using. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/choosing-task-mode.html">Choosing
     * a task mode for your data transfer</a>.</p>
     */
    inline const TaskMode& GetTaskMode() const{ return m_taskMode; }
    inline bool TaskModeHasBeenSet() const { return m_taskModeHasBeenSet; }
    inline void SetTaskMode(const TaskMode& value) { m_taskModeHasBeenSet = true; m_taskMode = value; }
    inline void SetTaskMode(TaskMode&& value) { m_taskModeHasBeenSet = true; m_taskMode = std::move(value); }
    inline TaskListEntry& WithTaskMode(const TaskMode& value) { SetTaskMode(value); return *this;}
    inline TaskListEntry& WithTaskMode(TaskMode&& value) { SetTaskMode(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_taskArn;
    bool m_taskArnHasBeenSet = false;

    TaskStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    TaskMode m_taskMode;
    bool m_taskModeHasBeenSet = false;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
