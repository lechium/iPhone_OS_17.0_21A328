//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIImageView.h>

@class MISSING_TYPE, UIImage;

__attribute__((visibility("hidden")))
@interface TipImageProxy : UIImageView
{
    MISSING_TYPE *shouldDisplay;	// 8 = 0x8
}

- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001a810
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000001a7b0
- (id)initWithImage:(id)arg1 highlightedImage:(id)arg2;	// IMP=0x000000000001a760
- (id)initWithImage:(id)arg1;	// IMP=0x000000000001a740
- (void)addSubview:(id)arg1;	// IMP=0x000000000001a6c0
@property(nonatomic) _Bool clipsToBounds;
@property(nonatomic, retain) UIImage *image;

@end

