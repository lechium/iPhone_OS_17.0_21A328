//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GTServiceConnection, NSSet;

__attribute__((visibility("hidden")))
@interface GTDeviceCapabilitiesXPCProxy : NSObject
{
    GTServiceConnection *_connection;	// 8 = 0x8
    NSSet *_ignoreMethods;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000012ae3
- (id)inferiorEnvironment:(id)arg1;	// IMP=0x0000000000012a0a
- (id)gpuToolsVersionQuery;	// IMP=0x0000000000012979
- (id)daemonDeviceCapabilities;	// IMP=0x0000000000012845
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x00000000000127c0
- (id)initWithConnection:(id)arg1 remoteProperties:(id)arg2;	// IMP=0x000000000001263f

@end

