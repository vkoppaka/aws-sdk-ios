/*
 * Copyright 2010-2012 Amazon.com, Inc. or its affiliates. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License").
 * You may not use this file except in compliance with the License.
 * A copy of the License is located at
 *
 *  http://aws.amazon.com/apache2.0
 *
 * or in the "license" file accompanying this file. This file is distributed
 * on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
 * express or implied. See the License for the specific language governing
 * permissions and limitations under the License.
 */


#import "../AmazonServiceRequestConfig.h"



/**
 * Change Message Visibility Request
 */

@interface SQSChangeMessageVisibilityRequest:AmazonServiceRequestConfig

{
    NSString *queueUrl;
    NSString *receiptHandle;
    NSNumber *visibilityTimeout;
}



/**
 * The URL of the SQS queue to take action on.
 */
@property (nonatomic, retain) NSString *queueUrl;

/**
 * The receipt handle associated with the message whose visibility
 * timeout should be changed.
 */
@property (nonatomic, retain) NSString *receiptHandle;

/**
 * The new value (in seconds) for the message's visibility timeout.
 */
@property (nonatomic, retain) NSNumber *visibilityTimeout;


/**
 * Default constructor for a new ChangeMessageVisibilityRequest object.  Callers should use the
 * property methods to initialize this object after creating it.
 */
-(id)init;

/**
 * Constructs a new ChangeMessageVisibilityRequest object.
 * Callers should use properties to initialize any additional object members.
 *
 * @param theQueueUrl The URL of the SQS queue to take action on.
 * @param theReceiptHandle The receipt handle associated with the message
 * whose visibility timeout should be changed.
 * @param theVisibilityTimeout The new value (in seconds) for the
 * message's visibility timeout.
 */
-(id)initWithQueueUrl:(NSString *)theQueueUrl andReceiptHandle:(NSString *)theReceiptHandle andVisibilityTimeout:(NSNumber *)theVisibilityTimeout;

/**
 * Returns a string representation of this object; useful for testing and
 * debugging.
 *
 * @return A string representation of this object.
 */
-(NSString *)description;


@end
