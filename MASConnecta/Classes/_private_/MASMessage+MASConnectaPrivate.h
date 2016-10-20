//
//  MASMessage+MASConnectaPrivate.h
//  MASConnecta
//
//  Copyright (c) 2016 CA. All rights reserved.
//
//  This software may be modified and distributed under the terms
//  of the MIT license. See the LICENSE file for details.
//

#import <MASConnecta/MASConnecta.h>


# pragma mark - Property Constants

static NSString *const MASMessageContentTypePropertyKey = @"contentType";
static NSString *const MASMessageContentEncodingPropertyKey = @"contentEncoding";
static NSString *const MASMessagePayloadPropertyKey = @"payload";
static NSString *const MASMessageReceiverObjectIdPropertyKey = @"receiverObjectId";
static NSString *const MASMessageSenderObjectIdPropertyKey = @"senderObjectId";
static NSString *const MASMessageSenderDisplayNamePropertyKey = @"senderDisplayName";
static NSString *const MASMessageSenderTypePropertyKey = @"senderType";
static NSString *const MASMessageSentTimePropertyKey = @"sentTime";
static NSString *const MASMessageVersionPropertyKey = @"version";
static NSString *const MASMessageTopicPropertyKey = @"topic";

@interface MASMessage (MASConnectaPrivate)


# pragma mark - Properties

@property (nonatomic, copy, readwrite) NSString *version;
@property (nonatomic, copy, readwrite) NSString *topic;
@property (nonatomic, assign, readwrite) MASSenderType senderType;
@property (nonatomic, copy, readwrite) NSString *receiverObjectId;
@property (nonatomic, copy, readwrite) NSString *senderObjectId;
@property (nonatomic, copy, readwrite) NSString *senderDisplayName;
@property (nonatomic, copy, readwrite) NSDate *sentTime;
@property (nonatomic, copy, readwrite) NSData *payload;
@property (nonatomic, copy, readwrite) NSString *contentType;
@property (nonatomic, copy, readwrite) NSString *contentEncoding;

# pragma mark - Message

+ (MASMessage *)messageFromMQTTMessage:(MASMQTTMessage *)mqttMessage;


# pragma mark - Lifecycle

- (instancetype)initWithPayload:(NSData *)payload
                    contentType:(NSString *)contentType;


- (instancetype)initWithPayload:(NSData *)payload
                    contentType:(NSString *)contentType
                contentEncoding:(NSString *)contentEncoding
                        version:(NSString *)version
                          topic:(NSString *)topic
                     receiverId:(NSString *)receiverId
                       senderId:(NSString *)senderId
              senderDisplayName:(NSString *)senderDisplayName
                     senderType:(MASSenderType)senderType
                       sentTime:(NSDate *)sentTime;
    

# pragma mark - Notifications

- (void)postReceivedNotification;


- (void)postSentNotification;

@end
