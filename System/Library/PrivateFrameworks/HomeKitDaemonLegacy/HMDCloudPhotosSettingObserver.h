//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSNotificationCenter, NSString;

__attribute__((visibility("hidden")))
@interface HMDCloudPhotosSettingObserver : HMFObject
{
    _Bool _cloudPhotosEnabled;	// 8 = 0x8
    CDUnknownBlockType _accountFactory;	// 16 = 0x10
    NSNotificationCenter *_notificationCenter;	// 24 = 0x18
}

+ (id)logCategory;	// IMP=0x00100000006a23af
+ (id)sharedInstance;	// IMP=0x00100000006a237f
- (void).cxx_destruct;	// IMP=0x00000000006a22cd
@property(readonly) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(readonly) CDUnknownBlockType accountFactory; // @synthesize accountFactory=_accountFactory;
@property(getter=isCloudPhotosEnabled) _Bool cloudPhotosEnabled; // @synthesize cloudPhotosEnabled=_cloudPhotosEnabled;
- (_Bool)fetchCloudPhotosEnabled;	// IMP=0x00000000006a220d
- (void)handleAccountStoreDidChangeNotification:(id)arg1;	// IMP=0x00000000006a1fd3
- (id)initWithAccountFactory:(CDUnknownBlockType)arg1 notificationCenter:(id)arg2;	// IMP=0x00000000006a1ebd
- (id)init;	// IMP=0x00000000006a1e5c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
