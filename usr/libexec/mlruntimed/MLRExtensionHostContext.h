//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSExtensionContext.h>

@class NSString;

@interface MLRExtensionHostContext : NSExtensionContext
{
}

+ (id)_extensionAuxiliaryVendorProtocol;	// IMP=0x002000000001c0bb
+ (id)_extensionAuxiliaryHostProtocol;	// IMP=0x001000000001c04f
- (id)issueSandBoxExtensionsForFileURLs:(id)arg1 requireWrite:(_Bool)arg2 outError:(id *)arg3;	// IMP=0x002000000001c657
- (void)performOnRemoteObjectSynchronously:(_Bool)arg1 WithBlock:(CDUnknownBlockType)arg2 errorHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000001c1a2
- (void)performOnRemoteObjectSynchronouslyWithBlock:(CDUnknownBlockType)arg1 errorHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000001c185
- (void)performOnRemoteObjectWithBlock:(CDUnknownBlockType)arg1 errorHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000001c16b
- (int)pid;	// IMP=0x001000000001c127

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

