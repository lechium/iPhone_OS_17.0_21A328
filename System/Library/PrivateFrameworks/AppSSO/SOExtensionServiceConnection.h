//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSXPCConnection, NSXPCListenerEndpoint;

__attribute__((visibility("hidden")))
@interface SOExtensionServiceConnection : NSObject
{
    NSXPCConnection *_xpcConnection;	// 8 = 0x8
    NSXPCListenerEndpoint *_serviceXpcEndpoint;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000001f1f
@property(retain) NSXPCListenerEndpoint *serviceXpcEndpoint; // @synthesize serviceXpcEndpoint=_serviceXpcEndpoint;
@property(retain) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
- (void)beginAuthorizationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000001c2d
- (_Bool)_connectToService;	// IMP=0x0000000000001702
- (id)initWithListenerEndpoint:(id)arg1;	// IMP=0x00000000000015fd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

