//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SASExpressCloudSettings;
@protocol OS_dispatch_queue;

@interface BYDaemonExpressActivity : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    SASExpressCloudSettings *_cloudSettings;	// 16 = 0x10
}

+ (id)sharedActivity;	// IMP=0x0040000000003fcf
- (void).cxx_destruct;	// IMP=0x0020000000004ae9
@property(retain, nonatomic) SASExpressCloudSettings *cloudSettings; // @synthesize cloudSettings=_cloudSettings;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)_updateSettingsForActivity:(id)arg1;	// IMP=0x00100000000044e6
- (void)registerBackupActivity;	// IMP=0x00100000000043aa
- (void)registerMaintenanceActivity;	// IMP=0x0010000000004250
- (void)unregisterActivity;	// IMP=0x0010000000004103
- (void)registerActivity;	// IMP=0x001000000000407c
- (id)init;	// IMP=0x0010000000004024

@end
