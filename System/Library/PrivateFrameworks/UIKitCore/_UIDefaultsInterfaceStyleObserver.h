//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIDefaultsInterfaceStyleObserver : NSObject
{
    NSString *_notificationName;	// 8 = 0x8
    int _notifyToken;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000100e4d1
- (void)_didChange;	// IMP=0x000000000100e47b
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000100e469
- (void)dealloc;	// IMP=0x000000000100e42b
- (void)observeUserDefaults:(id)arg1 key:(id)arg2;	// IMP=0x000000000100e407
- (id)initWithNotificationName:(id)arg1 darwinNotification:(const char *)arg2;	// IMP=0x000000000100e310

@end

