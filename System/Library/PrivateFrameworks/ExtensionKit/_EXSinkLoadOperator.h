//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSXPCListenerEndpoint;

__attribute__((visibility("hidden")))
@interface _EXSinkLoadOperator
{
    NSXPCListenerEndpoint *_endpoint;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000043a54
- (void).cxx_destruct;	// IMP=0x0000000000044396
@property(retain) NSXPCListenerEndpoint *endpoint; // @synthesize endpoint=_endpoint;
- (void)loadPreviewImageWithCompletionHandler:(CDUnknownBlockType)arg1 expectedValueClass:(Class)arg2 options:(id)arg3;	// IMP=0x00000000000442b8
- (void)loadItemForTypeIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2 expectedValueClass:(Class)arg3 options:(id)arg4;	// IMP=0x0000000000043b8a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000043af4
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000043a5c

@end

