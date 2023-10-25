//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSFileProviderExtension, NSString;

__attribute__((visibility("hidden")))
@interface FPXV2ExtensionWrapper : NSObject
{
    Class _extensionClass;	// 8 = 0x8
    NSFileProviderExtension *_extension;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000007f53a
@property(readonly, nonatomic) NSFileProviderExtension *extension; // @synthesize extension=_extension;
@property(retain, nonatomic) Class extensionClass; // @synthesize extensionClass=_extensionClass;
- (id)forwardingTargetForSelector:(SEL)arg1;	// IMP=0x000000000007f507
- (_Bool)conformsToProtocol:(id)arg1;	// IMP=0x000000000007f492
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x000000000007f409
- (void)setInteractionSuppressed:(_Bool)arg1 forIdentifier:(id)arg2;	// IMP=0x000000000007f3b0
- (_Bool)isInteractionSuppressedForIdentifier:(id)arg1;	// IMP=0x000000000007f351
- (id)fetchThumbnailsForItemIdentifiers:(id)arg1 requestedSize:(struct CGSize)arg2 perThumbnailCompletionHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000007f338
- (id)performActionWithIdentifier:(id)arg1 onItemsWithIdentifiers:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000007f244
- (id)supportedServiceSourcesForItemIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000007f19f
- (void)materializedItemsDidChangeWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000007f189
- (void)importDidFinishWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000007f173
- (id)modifyItem:(id)arg1 baseVersion:(id)arg2 changedFields:(unsigned long long)arg3 contents:(id)arg4 options:(unsigned long long)arg5 request:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;	// IMP=0x000000000007f13f
- (id)itemForIdentifier:(id)arg1 request:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000007f09a
- (id)fetchContentsForItemWithIdentifier:(id)arg1 version:(id)arg2 usingExistingContentsAtURL:(id)arg3 existingVersion:(id)arg4 request:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x000000000007ed85
- (id)fetchContentsForItemWithIdentifier:(id)arg1 version:(id)arg2 request:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000007eb99
- (id)enumeratorForSearch:(id)arg1 request:(id)arg2 error:(id *)arg3;	// IMP=0x000000000007e939
- (id)enumeratorForContainerItemIdentifier:(id)arg1 request:(id)arg2 error:(id *)arg3;	// IMP=0x000000000007e6e0
- (id)deleteItemWithIdentifier:(id)arg1 baseVersion:(id)arg2 options:(unsigned long long)arg3 request:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000000007e6b2
- (id)createItemBasedOnTemplate:(id)arg1 fields:(unsigned long long)arg2 contents:(id)arg3 options:(unsigned long long)arg4 request:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x000000000007e5d5
- (void)invalidate;	// IMP=0x000000000007e5bf
- (id)initWithDomain:(id)arg1;	// IMP=0x000000000007e495

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
