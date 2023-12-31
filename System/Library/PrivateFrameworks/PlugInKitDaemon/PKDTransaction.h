//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PKDServer, PKDXpcClient;
@protocol OS_xpc_object;

@interface PKDTransaction : NSObject
{
    const char *_type;	// 8 = 0x8
    unsigned long long _interval;	// 16 = 0x10
    PKDXpcClient *_client;	// 24 = 0x18
    NSObject<OS_xpc_object> *_request;	// 32 = 0x20
    NSObject<OS_xpc_object> *_reply;	// 40 = 0x28
    unsigned long long _version;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000001aaa0
@property unsigned long long version; // @synthesize version=_version;
@property(retain) NSObject<OS_xpc_object> *reply; // @synthesize reply=_reply;
@property(retain) NSObject<OS_xpc_object> *request; // @synthesize request=_request;
@property(retain) PKDXpcClient *client; // @synthesize client=_client;
- (void)fail:(long long)arg1 error:(id)arg2;	// IMP=0x000000000001a8d0
- (void)fail:(long long)arg1 message:(id)arg2;	// IMP=0x000000000001a7f0
- (void)done;	// IMP=0x000000000001a6a0
- (void)addAnnotationForPlugIn:(id)arg1 in:(id)arg2;	// IMP=0x000000000001a550
- (_Bool)pluginShouldBeAutoEnabled:(id)arg1;	// IMP=0x000000000001a540
- (void)matchPlugIns;	// IMP=0x0000000000015f40
- (void)findPlugIn;	// IMP=0x0000000000015b20
- (id)findPlugInByPathURL:(id)arg1;	// IMP=0x0000000000015a30
- (id)findPlugInByUUID:(id)arg1;	// IMP=0x0000000000015960
- (void)lockDownPlugIns;	// IMP=0x00000000000149b0
- (void)bulkAnnotatePlugIns;	// IMP=0x00000000000142a0
- (void)annotatePlugIns;	// IMP=0x0000000000013be0
- (void)accessPlugIns;	// IMP=0x0000000000013950
- (void)readyPlugIns;	// IMP=0x00000000000128c0
- (_Bool)processUuidList:(CDUnknownBlockType)arg1;	// IMP=0x0000000000011c80
- (void)bulkPlugIns;	// IMP=0x0000000000011be0
- (void)removePlugIns;	// IMP=0x0000000000011940
- (void)addPlugIns;	// IMP=0x0000000000011670
- (_Bool)processPaths:(CDUnknownBlockType)arg1;	// IMP=0x00000000000115a0
- (_Bool)marshalPaths:(CDUnknownBlockType)arg1;	// IMP=0x0000000000011340
- (void)dispatch;	// IMP=0x0000000000011050
- (CDStruct_4c969caf)auditToken;	// IMP=0x0000000000010ff0
@property(readonly) NSObject<OS_xpc_object> *connection;
@property(readonly) PKDServer *server;
- (id)initWithRequest:(id)arg1 forClient:(id)arg2;	// IMP=0x0000000000010ca0

@end

