//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSFileHandle, NSXPCConnection;

__attribute__((visibility("hidden")))
@interface PKPrinterTool_Client : NSObject
{
    NSXPCConnection *_conn;	// 8 = 0x8
    NSFileHandle *_streamHandle;	// 16 = 0x10
}

+ (id)sharedClient;	// IMP=0x00600000000021df
- (void).cxx_destruct;	// IMP=0x0000000000004b35
- (id)getResponseForCurrentRequest:(_Bool)arg1;	// IMP=0x00000000000048bc
- (void)getResponseForCurrentRequest:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000004645
- (_Bool)sendPayloadForCurrentRequest:(id)arg1;	// IMP=0x0000000000004476
- (_Bool)startStreamingRequest:(id)arg1;	// IMP=0x00000000000041d6
- (void)startStreamingRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000003e12
- (void)printerTool_checkAccessState:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000003ba0
- (void)printerTool_queryPrinter:(id)arg1 attributes:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000037d9
- (void)printerTool_getPrinterDescription:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000003569
- (void)printerTool_identifyPrinter:(id)arg1 message:(id)arg2 actions:(id)arg3;	// IMP=0x0000000000003466
- (void)printerTool_removeKeychainItem:(id)arg1;	// IMP=0x00000000000033ae
- (void)printerTool_realPathForTmp:(CDUnknownBlockType)arg1;	// IMP=0x0000000000003167
- (void)endpointResolve:(id)arg1 timeout:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000002eed
- (void)browseInfoForPrinter:(id)arg1 timeout:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000002c77
- (void)setLastUsedPrintersForCurrentNetwork:(id)arg1;	// IMP=0x0000000000002bbf
- (void)getLastUsedPrintersForCurrentNetworkCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000002978
- (void)getJobAttributesForPrintdJobID:(int)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000002709
- (void)cancelJob:(int)arg1;	// IMP=0x000000000000267a
- (void)invalidate;	// IMP=0x0000000000002648
- (id)ptConn;	// IMP=0x0000000000002234
- (id)init;	// IMP=0x00000000000021b0

@end

