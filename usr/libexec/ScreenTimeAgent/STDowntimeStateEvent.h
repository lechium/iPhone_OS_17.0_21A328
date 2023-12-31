//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSString, STUserID;

@interface STDowntimeStateEvent : NSObject
{
    NSString *_identifier;	// 8 = 0x8
    NSDate *_downtimeDate;	// 16 = 0x10
    STUserID *_userID;	// 24 = 0x18
    long long _downtimeConfigurationState;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000000b8f2f
@property(readonly) long long downtimeConfigurationState; // @synthesize downtimeConfigurationState=_downtimeConfigurationState;
@property(readonly, copy) STUserID *userID; // @synthesize userID=_userID;
@property(readonly, copy) NSDate *downtimeDate; // @synthesize downtimeDate=_downtimeDate;
@property(readonly, copy) NSString *identifier; // @synthesize identifier=_identifier;
- (unsigned long long)hash;	// IMP=0x00100000000b8e1e
- (_Bool)isEqualToDowntimeStateEvent:(id)arg1;	// IMP=0x00100000000b8c7d
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000b8c1a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000b8bde
@property(readonly) _Bool enabled;
- (id)initWithIdentifier:(id)arg1 downtimeConfigurationState:(long long)arg2 downtimeDate:(id)arg3 userID:(id)arg4;	// IMP=0x00100000000b8aaf

@end

