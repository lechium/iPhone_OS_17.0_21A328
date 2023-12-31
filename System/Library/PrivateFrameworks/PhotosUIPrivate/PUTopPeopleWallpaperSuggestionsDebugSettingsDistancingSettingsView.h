//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class PUTopPeopleWallpaperSuggestionsDistancingContext, UITextField;

__attribute__((visibility("hidden")))
@interface PUTopPeopleWallpaperSuggestionsDebugSettingsDistancingSettingsView : UIView
{
    PUTopPeopleWallpaperSuggestionsDistancingContext *_distancingContext;	// 8 = 0x8
    UITextField *_timePivotTextField;	// 16 = 0x10
    UITextField *_locationPivotTextField;	// 24 = 0x18
    UITextField *_peoplePivotTextField;	// 32 = 0x20
    UITextField *_sceneprintPivotTextField;	// 40 = 0x28
    UITextField *_timeFactorTextField;	// 48 = 0x30
    UITextField *_locationFactorTextField;	// 56 = 0x38
    UITextField *_peopleFactorTextField;	// 64 = 0x40
    UITextField *_sceneprintFactorTextField;	// 72 = 0x48
    UITextField *_maximumNumberOfSuggestionsWithPeopleTextField;	// 80 = 0x50
    UITextField *_maximumNumberOfSuggestionsWithoutPeopleTextField;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00000000000c5213
@property(readonly) UITextField *maximumNumberOfSuggestionsWithoutPeopleTextField; // @synthesize maximumNumberOfSuggestionsWithoutPeopleTextField=_maximumNumberOfSuggestionsWithoutPeopleTextField;
@property(readonly) UITextField *maximumNumberOfSuggestionsWithPeopleTextField; // @synthesize maximumNumberOfSuggestionsWithPeopleTextField=_maximumNumberOfSuggestionsWithPeopleTextField;
@property(readonly) UITextField *sceneprintFactorTextField; // @synthesize sceneprintFactorTextField=_sceneprintFactorTextField;
@property(readonly) UITextField *peopleFactorTextField; // @synthesize peopleFactorTextField=_peopleFactorTextField;
@property(readonly) UITextField *locationFactorTextField; // @synthesize locationFactorTextField=_locationFactorTextField;
@property(readonly) UITextField *timeFactorTextField; // @synthesize timeFactorTextField=_timeFactorTextField;
@property(readonly) UITextField *sceneprintPivotTextField; // @synthesize sceneprintPivotTextField=_sceneprintPivotTextField;
@property(readonly) UITextField *peoplePivotTextField; // @synthesize peoplePivotTextField=_peoplePivotTextField;
@property(readonly) UITextField *locationPivotTextField; // @synthesize locationPivotTextField=_locationPivotTextField;
@property(readonly) UITextField *timePivotTextField; // @synthesize timePivotTextField=_timePivotTextField;
- (void)setMaximumNumberOfSuggestionsWithoutPeople:(id)arg1;	// IMP=0x00000000000c50d3
- (void)setMaximumNumberOfSuggestionsWithPeople:(id)arg1;	// IMP=0x00000000000c506f
- (void)setSceneprintFactor:(id)arg1;	// IMP=0x00000000000c500e
- (void)setPeopleFactor:(id)arg1;	// IMP=0x00000000000c4fad
- (void)setLocationFactor:(id)arg1;	// IMP=0x00000000000c4f4c
- (void)setTimeFactor:(id)arg1;	// IMP=0x00000000000c4eeb
- (void)setSceneprintPivot:(id)arg1;	// IMP=0x00000000000c4e8a
- (void)setPeoplePivot:(id)arg1;	// IMP=0x00000000000c4e29
- (void)setLocationPivot:(id)arg1;	// IMP=0x00000000000c4dc8
- (void)setTimePivot:(id)arg1;	// IMP=0x00000000000c4d5f
- (id)initWithDistancingContext:(id)arg1;	// IMP=0x00000000000c3513

@end

