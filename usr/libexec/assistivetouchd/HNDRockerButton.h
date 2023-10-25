//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UIImage, UIImageView, UILabel, UIView;
@protocol HNDRockerButtonDataSource;

@interface HNDRockerButton
{
    CDUnknownBlockType _downBlock;	// 16 = 0x10
    CDUnknownBlockType _upBlock;	// 24 = 0x18
    NSString *_title;	// 32 = 0x20
    _Bool _selected;	// 40 = 0x28
    _Bool _highlighted;	// 41 = 0x29
    UILabel *_label;	// 48 = 0x30
    NSString *_imageName;	// 56 = 0x38
    UIImageView *_imageView;	// 64 = 0x40
    _Bool _isEmptyFavorite;	// 72 = 0x48
    _Bool _customTitle;	// 73 = 0x49
    _Bool _isBackButton;	// 74 = 0x4a
    _Bool _showWithGuidedAccess;	// 75 = 0x4b
    _Bool isEmptyFavorite;	// 76 = 0x4c
    _Bool customTitle;	// 77 = 0x4d
    _Bool isModalDown;	// 78 = 0x4e
    _Bool _continueHighlightAfterTouch;	// 79 = 0x4f
    _Bool _disabled;	// 80 = 0x50
    UIImage *_overrideImage;	// 88 = 0x58
    CDUnknownBlockType _substantialTransitionOccurredBlock;	// 96 = 0x60
    NSString *_location;	// 104 = 0x68
    id <HNDRockerButtonDataSource> _dataSource;	// 112 = 0x70
    NSString *_type;	// 120 = 0x78
    UIImage *_selectedImage;	// 128 = 0x80
    UIImage *_unselectedImage;	// 136 = 0x88
}

+ (id)_dummyImage;	// IMP=0x002000000005cb53
+ (id)buttonWithTitle:(id)arg1 imageName:(id)arg2 downBlock:(CDUnknownBlockType)arg3 upBlock:(CDUnknownBlockType)arg4 dataSource:(id)arg5 showWithGuidedAccess:(_Bool)arg6;	// IMP=0x001000000005c94c
- (void).cxx_destruct;	// IMP=0x002000000005f464
@property(retain, nonatomic) UIImage *unselectedImage; // @synthesize unselectedImage=_unselectedImage;
@property(retain, nonatomic) UIImage *selectedImage; // @synthesize selectedImage=_selectedImage;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
@property(nonatomic) _Bool disabled; // @synthesize disabled=_disabled;
@property(nonatomic) __weak id <HNDRockerButtonDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) NSString *location; // @synthesize location=_location;
@property(copy, nonatomic) CDUnknownBlockType substantialTransitionOccurredBlock; // @synthesize substantialTransitionOccurredBlock=_substantialTransitionOccurredBlock;
@property(retain, nonatomic) UIImage *overrideImage; // @synthesize overrideImage=_overrideImage;
@property(readonly, nonatomic) UILabel *label; // @synthesize label=_label;
@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) _Bool showWithGuidedAccess; // @synthesize showWithGuidedAccess=_showWithGuidedAccess;
@property(nonatomic) _Bool continueHighlightAfterTouch; // @synthesize continueHighlightAfterTouch=_continueHighlightAfterTouch;
@property(nonatomic) _Bool isBackButton; // @synthesize isBackButton=_isBackButton;
@property(nonatomic) _Bool isModalDown; // @synthesize isModalDown;
@property(nonatomic) _Bool customTitle; // @synthesize customTitle;
@property(nonatomic) _Bool isEmptyFavorite; // @synthesize isEmptyFavorite;
@property(copy, nonatomic) CDUnknownBlockType upBlock; // @synthesize upBlock=_upBlock;
@property(copy, nonatomic) CDUnknownBlockType downBlock; // @synthesize downBlock=_downBlock;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
- (id)description;	// IMP=0x001000000005f13a
- (id)accessibilityLabel;	// IMP=0x001000000005f0b1
- (struct CGRect)accessibilityFrame;	// IMP=0x001000000005efd6
- (_Bool)canBecomeFocused;	// IMP=0x001000000005efce
- (_Bool)isAccessibilityElement;	// IMP=0x001000000005efc6
@property(readonly, nonatomic) UIView *imageViewContainerView;
- (void)dealloc;	// IMP=0x001000000005ef3c
- (void)_updateLabelText;	// IMP=0x001000000005ec83
- (void)updateTextColor;	// IMP=0x001000000005ea59
@property(readonly, nonatomic) UIImage *deviceSpecificImage;
- (double)_screenHeight;	// IMP=0x001000000005e980
- (id)_deviceSpecificImageForName:(id)arg1 screenHeight:(double)arg2;	// IMP=0x001000000005e777
- (void)getDeviceSpecificImageForColor:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x001000000005e3be
- (id)currentImage;	// IMP=0x001000000005e163
- (void)resetImages;	// IMP=0x001000000005e11c
- (_Bool)_inSelectedState;	// IMP=0x001000000005e0d1
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x001000000005dfb1
- (void)performPress:(_Bool)arg1;	// IMP=0x001000000005df2a
- (void)handleRealUpEvent:(struct CGPoint)arg1 maxOrb:(double)arg2;	// IMP=0x001000000005deda
- (void)handleRealCancelEvent:(struct CGPoint)arg1;	// IMP=0x001000000005dd29
- (void)handleFingerDriftedAway;	// IMP=0x001000000005dce0
- (void)handleRealDownEvent:(struct CGPoint)arg1;	// IMP=0x001000000005dca4
- (void)_updateImageView;	// IMP=0x001000000005da1b
- (void)_updateImage;	// IMP=0x001000000005d9ed
- (void)_updateFont;	// IMP=0x001000000005d992
- (id)viewForLastBaselineLayout;	// IMP=0x001000000005d97d
- (void)_traitCollectionDidChange:(id)arg1;	// IMP=0x001000000005d8a8
- (id)initWithImageName:(id)arg1;	// IMP=0x001000000005cc66

@end
