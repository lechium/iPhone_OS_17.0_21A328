//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSXPCListener, SBSStatusBarStyleOverridesAssertion, SOSEngine;
@protocol OS_os_transaction;

@interface SOSDaemon : NSObject
{
    SOSEngine *_sosEngine;	// 8 = 0x8
    NSXPCListener *_xpcListener;	// 16 = 0x10
    SBSStatusBarStyleOverridesAssertion *_locationSBAssertion;	// 24 = 0x18
    NSObject<OS_os_transaction> *_sendingMessagesOSTransaction;	// 32 = 0x20
    int _notifyToken;	// 40 = 0x28
    _Bool _sosIsStarting;	// 44 = 0x2c
}

+ (void)connectToDaemon;	// IMP=0x0040000000002949
- (void).cxx_destruct;	// IMP=0x0020000000002b5f
- (void)languageDidChange;	// IMP=0x0010000000002b03
- (void)deleteKeepAlivePathStateFile;	// IMP=0x00100000000027f3
- (void)createKeepAlivePathStateFile;	// IMP=0x001000000000255a
- (id)keepAliveFilePath;	// IMP=0x00100000000024da
- (id)keepAliveFileDirectory;	// IMP=0x00100000000023e5
- (id)keepAliveFilename;	// IMP=0x00100000000023d8
- (void)releaseMessageSendingOSTransaction;	// IMP=0x00100000000023be
- (void)takeMessageSendingOSTransaction;	// IMP=0x0010000000002395
- (void)releaseLocationStatusBarAssertion;	// IMP=0x00100000000022db
- (void)takeLocationStatusBarAssertion;	// IMP=0x0010000000001ff9
- (void)SOSHasActiveTriggerChanged:(id)arg1;	// IMP=0x0010000000001ee9
- (void)stopSendingLocationUpdateNotification;	// IMP=0x0010000000001e4c
- (void)startSendingLocationUpdateNotification;	// IMP=0x0010000000001db8
- (void)SOSSendingLocationUpdateChanged:(id)arg1;	// IMP=0x0010000000001c8c
- (void)dealloc;	// IMP=0x0010000000001bb8
- (id)init;	// IMP=0x001000000000183d
- (void)run;	// IMP=0x00100000000016fa

@end

