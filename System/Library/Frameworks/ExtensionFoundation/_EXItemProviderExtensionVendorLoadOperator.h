//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface _EXItemProviderExtensionVendorLoadOperator : NSObject
{
    NSUUID *_identifier;	// 8 = 0x8
    NSUUID *_extensionContextIdentifier;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000044a81
- (void).cxx_destruct;	// IMP=0x000000000004509f
@property(copy, nonatomic) NSUUID *extensionContextIdentifier; // @synthesize extensionContextIdentifier=_extensionContextIdentifier;
@property(copy, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
- (void)loadPreviewImageWithCompletionHandler:(CDUnknownBlockType)arg1 expectedValueClass:(Class)arg2 options:(id)arg3;	// IMP=0x0000000000044e6d
- (void)loadItemForTypeIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2 expectedValueClass:(Class)arg3 options:(id)arg4;	// IMP=0x0000000000044c37
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000044b89
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000044a89
- (void)dealloc;	// IMP=0x0000000000044a2a
- (id)initWithExtensionContextIdentifier:(id)arg1;	// IMP=0x000000000004496e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

