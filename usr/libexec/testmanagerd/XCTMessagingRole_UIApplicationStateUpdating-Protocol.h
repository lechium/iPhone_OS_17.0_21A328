//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, XCTApplicationStateSnapshot;

@protocol XCTMessagingRole_UIApplicationStateUpdating
- (void)_XCT_interfaceOrientationDidChange:(long long)arg1;
- (void)_XCT_deviceOrientationDidChange:(long long)arg1;
- (void)_XCT_applicationDidUpdateState:(XCTApplicationStateSnapshot *)arg1;
- (void)_XCT_applicationWithBundleID:(NSString *)arg1 didUpdatePID:(int)arg2 andState:(unsigned long long)arg3;
@end
