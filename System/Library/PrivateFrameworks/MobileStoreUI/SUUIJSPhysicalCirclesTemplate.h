//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ITMLKit/IKJSObject.h>

@class SUUIPhysicalCirclesTemplateDOMFeature;

__attribute__((visibility("hidden")))
@interface SUUIJSPhysicalCirclesTemplate : IKJSObject
{
    SUUIPhysicalCirclesTemplateDOMFeature *_feature;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000025e958
- (void)_performAnimationWithType:(long long)arg1 callback:(id)arg2;	// IMP=0x000000000025e5f0
- (void)performResetAnimation:(id)arg1;	// IMP=0x000000000025e5d6
- (void)performFinishAnimation:(id)arg1;	// IMP=0x000000000025e5bf
- (void)afterDOMUpdate:(id)arg1;	// IMP=0x000000000025e27a
- (id)initWithAppContext:(id)arg1 DOMFeature:(id)arg2;	// IMP=0x000000000025e1cb

@end

