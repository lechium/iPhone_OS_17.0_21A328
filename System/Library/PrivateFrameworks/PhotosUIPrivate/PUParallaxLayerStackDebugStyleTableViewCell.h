//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UITableViewCell.h>

@class NSString, UIColorWell, UISegmentedControl, UISlider, UIView;
@protocol PUParallaxLayerStackDebugStyleTableViewCellDelegate;

__attribute__((visibility("hidden")))
@interface PUParallaxLayerStackDebugStyleTableViewCell : UITableViewCell
{
    id <PUParallaxLayerStackDebugStyleTableViewCellDelegate> _styleCellDelegate;	// 8 = 0x8
    NSString *_styleKind;	// 16 = 0x10
    UIView *_controlsView;	// 24 = 0x18
    UISlider *_colorSlider;	// 32 = 0x20
    UIColorWell *_colorButton1;	// 40 = 0x28
    UIColorWell *_colorButton2;	// 48 = 0x30
    UISegmentedControl *_tonalityControl;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000003573e4
@property(retain, nonatomic) UISegmentedControl *tonalityControl; // @synthesize tonalityControl=_tonalityControl;
@property(retain, nonatomic) UIColorWell *colorButton2; // @synthesize colorButton2=_colorButton2;
@property(retain, nonatomic) UIColorWell *colorButton1; // @synthesize colorButton1=_colorButton1;
@property(retain, nonatomic) UISlider *colorSlider; // @synthesize colorSlider=_colorSlider;
@property(retain, nonatomic) UIView *controlsView; // @synthesize controlsView=_controlsView;
@property(retain, nonatomic) NSString *styleKind; // @synthesize styleKind=_styleKind;
@property(nonatomic) __weak id <PUParallaxLayerStackDebugStyleTableViewCellDelegate> styleCellDelegate; // @synthesize styleCellDelegate=_styleCellDelegate;
- (void)updateDelegate:(id)arg1;	// IMP=0x000000000035728d
- (void)updateSlider:(id)arg1;	// IMP=0x0000000000357104
- (void)updateColor:(id)arg1;	// IMP=0x0000000000356ffe
- (void)applyToStyle:(id)arg1;	// IMP=0x0000000000356c2e
- (void)rebuildControlsViewForStyle:(id)arg1;	// IMP=0x0000000000356314
- (id)intensitySliderWithWidth:(double)arg1;	// IMP=0x000000000035619f
- (id)colorButtonWithColor:(id)arg1 title:(id)arg2;	// IMP=0x00000000003560bd
- (id)newTonalityControl;	// IMP=0x000000000035605b

@end
