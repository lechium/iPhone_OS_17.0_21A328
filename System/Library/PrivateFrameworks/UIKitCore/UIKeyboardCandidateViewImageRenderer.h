//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCache, UIView;

__attribute__((visibility("hidden")))
@interface UIKeyboardCandidateViewImageRenderer : NSObject
{
    UIView *_viewForTraitCollection;	// 8 = 0x8
    NSCache *_imageCache;	// 16 = 0x10
}

+ (id)sharedImageRenderer;	// IMP=0x0060000000a8a37d
- (void).cxx_destruct;	// IMP=0x0000000000a8b929
@property(retain, nonatomic) NSCache *imageCache; // @synthesize imageCache=_imageCache;
@property(nonatomic) __weak UIView *viewForTraitCollection; // @synthesize viewForTraitCollection=_viewForTraitCollection;
- (id)drawGradientImage:(struct CGRect)arg1 startPoint:(struct CGPoint)arg2 endPoint:(struct CGPoint)arg3 applyScale:(_Bool)arg4;	// IMP=0x0000000000a8b649
- (id)edgeMaskImageForRightSide:(_Bool)arg1;	// IMP=0x0000000000a8b4c4
- (id)extensionMaskImage;	// IMP=0x0000000000a8b388
- (id)handwritingCellBackgroundImageForDarkKeyboard:(_Bool)arg1 highlighted:(_Bool)arg2;	// IMP=0x0000000000a8b0df
- (id)pocketShadowImageForDarkKeyboard:(_Bool)arg1 fadesToBottom:(_Bool)arg2 drawShadow:(_Bool)arg3 topPadding:(double)arg4 bottomPadding:(double)arg5 height:(double)arg6;	// IMP=0x0000000000a8a959
- (id)highlightedBarCellBackgroundImageWithColor:(id)arg1 insets:(struct UIEdgeInsets)arg2;	// IMP=0x0000000000a8a3d2
- (id)init;	// IMP=0x0000000000a8a327

@end

