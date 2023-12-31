//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class UIBezierPath;

__attribute__((visibility("hidden")))
@interface _UIDiffuseShadowView : UIView
{
    double _intensity;	// 8 = 0x8
    UIBezierPath *_path;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000104e1ff
@property(copy, nonatomic) UIBezierPath *path; // @synthesize path=_path;
@property(nonatomic) double intensity; // @synthesize intensity=_intensity;
- (void)_updateForCurrentTraits;	// IMP=0x000000000104df83
@property(nonatomic) struct CGSize offset;
@property(nonatomic) double radius;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000104dbae

@end

