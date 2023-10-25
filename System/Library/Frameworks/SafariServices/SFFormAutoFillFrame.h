//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, WKWebProcessPlugInFrame;

__attribute__((visibility("hidden")))
@interface SFFormAutoFillFrame : NSObject
{
    WKWebProcessPlugInFrame *_plugInFrame;	// 8 = 0x8
}

+ (id)autoFillFrameWithWebProcessPlugInFrame:(id)arg1;	// IMP=0x001000000017ee4f
- (void).cxx_destruct;	// IMP=0x000000000017f450
@property(readonly, nonatomic) WKWebProcessPlugInFrame *plugInFrame; // @synthesize plugInFrame=_plugInFrame;
- (void)enumerateChildFramesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000017f2bb
- (id)committedURL;	// IMP=0x000000000017f2a5
- (struct OpaqueJSValue *)jsWrapperInMetadataControllerScriptWorldForNode:(id)arg1;	// IMP=0x000000000017f1d2
- (_Bool)containsAnyFormElements;	// IMP=0x000000000017f1bc
- (struct OpaqueJSContext *)jsContextForMetadataControllerScriptWorld;	// IMP=0x000000000017f120
- (id)pageMainFrame;	// IMP=0x000000000017f08a
- (struct OpaqueFormAutoFillFrame *)frameRef;	// IMP=0x000000000017f080
- (id)_formMetadataController;	// IMP=0x000000000017f011
- (id)_pageContoller;	// IMP=0x000000000017efaa
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000017ef16
- (id)initWithWebProcessPlugInFrame:(id)arg1;	// IMP=0x000000000017ee98

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
