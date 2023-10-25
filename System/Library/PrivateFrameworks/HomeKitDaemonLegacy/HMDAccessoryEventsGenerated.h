//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface HMDAccessoryEventsGenerated : NSObject
{
}

+ (id)topicsRemovingAccessoryTopics:(id)arg1 accessoryUUID:(id)arg2;	// IMP=0x00800000006a2952
+ (_Bool)topicSuffix:(id)arg1 isPartOfIndex:(id)arg2;	// IMP=0x00800000006a28a2
+ (id)accessoryIndexForAccessoryUUID:(id)arg1 homeUUID:(id)arg2;	// IMP=0x00800000006a27ed
+ (id)forwardingTopicsForTopics:(id)arg1 residentAccessoryUUID:(id)arg2 homeUUID:(id)arg3;	// IMP=0x00800000006a26b2
+ (id)endpointAccessoryTopicsForAccessoryUUID:(id)arg1 homeUUID:(id)arg2;	// IMP=0x00800000006a2699
+ (id)homePodAccessoryTopicsForAccessoryUUID:(id)arg1 homeUUID:(id)arg2;	// IMP=0x00800000006a268c
+ (id)appleMediaAccessoryTopicsForAccessoryUUID:(id)arg1 homeUUID:(id)arg2;	// IMP=0x00800000006a267f
+ (id)indexTopicForTopic:(id)arg1;	// IMP=0x00800000006a2455
+ (id)allTopics;	// IMP=0x00800000006a2448
+ (id)topicMap;	// IMP=0x00800000006a243b

@end
