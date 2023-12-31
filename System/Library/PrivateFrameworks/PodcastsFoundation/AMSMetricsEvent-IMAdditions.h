//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppleMediaServices/AMSMetricsEvent.h>

@class NSString;

@interface AMSMetricsEvent (IMAdditions)
+ (id)im_defaultTopicForEvents;	// IMP=0x002000000004a892
+ (id)im_eventWithTopic:(id)arg1 eventType:(id)arg2;	// IMP=0x002000000004a805
+ (id)im_eventWithDefaultTopicAndEventType:(id)arg1;	// IMP=0x002000000004a79f
+ (id)im_pageEventWithDefaultTopic;	// IMP=0x002000000004a786
+ (id)im_clickEventWithDefaultTopic;	// IMP=0x002000000004a76d
+ (id)im_eventWithDefaultTopic;	// IMP=0x002000000004a676
- (void)im_setProperty:(id)arg1 forBodyKey:(id)arg2;	// IMP=0x001000000000fd12
- (void)im_addPropertiesWithDictionary:(id)arg1;	// IMP=0x001000000000fcc3
- (id)shortDescription;	// IMP=0x001000000004aa09
@property(retain, nonatomic, setter=im_setToken:) NSString *im_token;
@property(retain, nonatomic, setter=im_setContentIdentifier:) id im_contentIdentifier;
@property(retain, nonatomic, setter=im_setName:) NSString *im_name;
@end

