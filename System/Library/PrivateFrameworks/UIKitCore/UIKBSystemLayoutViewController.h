//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIViewController.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface UIKBSystemLayoutViewController : UIViewController
{
    NSMutableArray *_constraints;	// 416 = 0x1a0
    unsigned long long _horizontalLayoutType;	// 424 = 0x1a8
    unsigned long long _verticalLayoutType;	// 432 = 0x1b0
    struct CGSize _centeredOffsets;	// 440 = 0x1b8
    struct UIEdgeInsets _minimumInsets;	// 456 = 0x1c8
}

+ (id)systemLayoutViewControllerWithViewController:(id)arg1;	// IMP=0x0060000000b1159c
- (void).cxx_destruct;	// IMP=0x0000000000b11f56
@property(nonatomic) struct CGSize centeredOffsets; // @synthesize centeredOffsets=_centeredOffsets;
@property(nonatomic) struct UIEdgeInsets minimumInsets; // @synthesize minimumInsets=_minimumInsets;
@property(nonatomic) unsigned long long verticalLayoutType; // @synthesize verticalLayoutType=_verticalLayoutType;
@property(nonatomic) unsigned long long horizontalLayoutType; // @synthesize horizontalLayoutType=_horizontalLayoutType;
- (void)updateViewConstraints;	// IMP=0x0000000000b11776

@end

