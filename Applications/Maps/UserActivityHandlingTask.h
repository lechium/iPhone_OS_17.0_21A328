//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSUserActivity;

@interface UserActivityHandlingTask
{
    NSUserActivity *_userActivity;	// 8 = 0x8
}

+ (id)taskForUserActivity:(id)arg1 atColdLaunch:(_Bool)arg2;	// IMP=0x0040000000b9bf11
- (void).cxx_destruct;	// IMP=0x0020000000b9c413
@property(retain, nonatomic) NSUserActivity *userActivity; // @synthesize userActivity=_userActivity;
- (void)taskFinished:(id)arg1;	// IMP=0x0010000000b9c3ad
- (id)initWithUserActivity:(id)arg1;	// IMP=0x0010000000b9c330
- (void)_useMapsUserSessionEntity;	// IMP=0x0010000000b9c1ea
- (void)_sendAnalytics;	// IMP=0x0010000000b9c1e4

@end

