//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC15ScreenTimeAgent6Daemon : NSObject
{
    MISSING_TYPE *factory;	// 8 = 0x8
    MISSING_TYPE *$__lazy_storage_$_mirroringMonitor;	// 128 = 0x80
    MISSING_TYPE *$__lazy_storage_$_persistenceController;	// 136 = 0x88
    MISSING_TYPE *$__lazy_storage_$_notificationManager;	// 144 = 0x90
    MISSING_TYPE *$__lazy_storage_$_screenTimeOrganizationController;	// 152 = 0x98
    MISSING_TYPE *$__lazy_storage_$_askForTimeListener;	// 160 = 0xa0
    MISSING_TYPE *$__lazy_storage_$_askForTimeListenerDelegate;	// 168 = 0xa8
    MISSING_TYPE *$__lazy_storage_$_askForTimeEventRelay;	// 176 = 0xb0
    MISSING_TYPE *;	// 184 = 0xb8
    MISSING_TYPE *$__lazy_storage_$_askForTimeConfigurationProvider;	// 192 = 0xc0
    MISSING_TYPE *$__lazy_storage_$_askToManager;	// 200 = 0xc8
    MISSING_TYPE *$__lazy_storage_$_commandLineToolListener;	// 208 = 0xd0
    MISSING_TYPE *$__lazy_storage_$_commandLineToolListenerDelegate;	// 216 = 0xd8
    MISSING_TYPE *$__lazy_storage_$_publicAgentListener;	// 224 = 0xe0
    MISSING_TYPE *$__lazy_storage_$_privateAgentListener;	// 232 = 0xe8
    MISSING_TYPE *$__lazy_storage_$_contactsAgentListener;	// 240 = 0xf0
    MISSING_TYPE *$__lazy_storage_$_agentListenerDelegate;	// 248 = 0xf8
    MISSING_TYPE *$__lazy_storage_$_coreAnalyticsManager;	// 256 = 0x100
    MISSING_TYPE *$__lazy_storage_$_storeServer;	// 264 = 0x108
    MISSING_TYPE *$__lazy_storage_$_bootstrapperQueue;	// 272 = 0x110
    MISSING_TYPE *$__lazy_storage_$_xpcServiceProvider;	// 280 = 0x118
    MISSING_TYPE *organizationControllerAdapter;	// 288 = 0x120
    MISSING_TYPE *logger;	// 0 = 0x0
    MISSING_TYPE *kXpcStreamNotifyd;	// 0 = 0x0
    MISSING_TYPE *kXpcStreamAlarm;	// 25 = 0x19
    MISSING_TYPE *kXpcStreamDistnoted;	// 1163157343 = 0x45545f5f
    MISSING_TYPE *$__lazy_storage_$_coreDataServer;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_settingsListener;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_privateListener;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_diagnosticsListener;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_askListener;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_cleanupActivityScheduler;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_analyticsActivityScheduler;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_configurationSourceClient;	// 0 = 0x0
}

+ (void)setReactor:(id)arg1;	// IMP=0x00200000000e3f90
+ (id)reactor;	// IMP=0x00100000000e3f60
- (void).cxx_destruct;	// IMP=0x00400000000e4570
- (id)init;	// IMP=0x00100000000e5ee0
- (void)start;	// IMP=0x00100000000e5360
- (void)dealloc;	// IMP=0x00100000000e4550

@end

