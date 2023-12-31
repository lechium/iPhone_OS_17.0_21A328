//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class COSHorizontalCheckmarkChoiceView;

@interface COSWristSelectionViewController
{
    COSHorizontalCheckmarkChoiceView *_choiceView;	// 8 = 0x8
}

+ (void)_madeWristSelectionForLeftWrist:(_Bool)arg1;	// IMP=0x002000000008b677
+ (void)resumePairingWithSavedValue:(id)arg1;	// IMP=0x001000000008ac72
+ (_Bool)controllerNeedsToRun;	// IMP=0x001000000008abf3
- (void).cxx_destruct;	// IMP=0x002000000008b988
@property(retain, nonatomic) COSHorizontalCheckmarkChoiceView *choiceView; // @synthesize choiceView=_choiceView;
- (void)choiceView:(id)arg1 didSelectChoice:(unsigned long long)arg2;	// IMP=0x001000000008b95d
- (void)_madeWristSelectionForLeftWrist:(_Bool)arg1;	// IMP=0x001000000008b5dd
- (void)suggestedButtonPressed:(id)arg1;	// IMP=0x001000000008b3bc
- (id)suggestedButtonTitle;	// IMP=0x001000000008b350
- (id)imageResource;	// IMP=0x001000000008b344
- (_Bool)wantsDefaultImageResource;	// IMP=0x001000000008b33c
- (id)detailString;	// IMP=0x001000000008b270
- (id)titleString;	// IMP=0x001000000008b204
- (void)viewDidLoad;	// IMP=0x001000000008acae
- (_Bool)requiresActivationCheck;	// IMP=0x001000000008aca6
- (id)init;	// IMP=0x001000000008aba2

@end

