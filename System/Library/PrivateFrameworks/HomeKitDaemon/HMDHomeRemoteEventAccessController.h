//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMDAccessorySettingsEventHelper;
@protocol HMDHomeRemoteEventAccessControllerDataSource;

__attribute__((visibility("hidden")))
@interface HMDHomeRemoteEventAccessController : NSObject
{
    id <HMDHomeRemoteEventAccessControllerDataSource> _dataSource;	// 8 = 0x8
    HMDAccessorySettingsEventHelper *_settingsHelper;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000009527b7
@property(readonly, nonatomic) HMDAccessorySettingsEventHelper *settingsHelper; // @synthesize settingsHelper=_settingsHelper;
@property(readonly, nonatomic) __weak id <HMDHomeRemoteEventAccessControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (_Bool)isMediaSystemUUID:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000952626
- (_Bool)isSiriEndpointAccessoryUUID:(id)arg1 error:(id *)arg2;	// IMP=0x00000000009524b5
- (_Bool)isAppleMediaAccessoryUUID:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000952344
- (_Bool)remoteEventAllowedForAccessoryInfoWithTopicSuffix:(id)arg1 deviceType:(unsigned long long)arg2 userType:(unsigned long long)arg3;	// IMP=0x0000000000952052
- (_Bool)remoteEventAllowedForHomeEventTopic:(id)arg1 parsedEventTopic:(id)arg2 deviceType:(unsigned long long)arg3 userType:(unsigned long long)arg4;	// IMP=0x0000000000951cf1
- (_Bool)remoteEventAllowedForAccessoryEventTopic:(id)arg1 parsedEventTopic:(id)arg2 deviceType:(unsigned long long)arg3 userType:(unsigned long long)arg4;	// IMP=0x0000000000951712
- (_Bool)remoteEventAllowForMediaSystemSettingEventTopic:(id)arg1 deviceType:(unsigned long long)arg2 userType:(unsigned long long)arg3;	// IMP=0x00000000009514ec
- (_Bool)remoteEventAllowedForTopic:(id)arg1 deviceType:(unsigned long long)arg2 userType:(unsigned long long)arg3;	// IMP=0x000000000095121c
- (id)initWithDataSource:(id)arg1;	// IMP=0x000000000095119e

@end

