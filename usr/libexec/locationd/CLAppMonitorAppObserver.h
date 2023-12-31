//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol CLAppMonitorProtocol;

@interface CLAppMonitorAppObserver : NSObject
{
    _Bool _valid;	// 8 = 0x8
    id <CLAppMonitorProtocol> _appMonitor;	// 16 = 0x10
}

@property(nonatomic) id <CLAppMonitorProtocol> appMonitor; // @synthesize appMonitor=_appMonitor;
@property(nonatomic) _Bool valid; // @synthesize valid=_valid;
- (void)applicationsDidUninstall:(id)arg1;	// IMP=0x0010000000c1ee5e
- (void)applicationsDidInstall:(id)arg1;	// IMP=0x0010000000c1ee40
- (id)initWithAppMonitorProxy:(id)arg1;	// IMP=0x0010000000c1edf6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

