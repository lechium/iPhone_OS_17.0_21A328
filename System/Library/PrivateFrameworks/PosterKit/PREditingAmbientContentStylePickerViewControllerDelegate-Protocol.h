//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PosterKit/NSObject-Protocol.h>

@class PREditingAmbientContentStylePickerViewController, PREditingPosterContentStyleCoordinator;
@protocol PRPosterContentStyle;

@protocol PREditingAmbientContentStylePickerViewControllerDelegate <NSObject>
- (PREditingPosterContentStyleCoordinator *)coordinatorForContentStyle:(id <PRPosterContentStyle>)arg1 forAmbientStylePicker:(PREditingAmbientContentStylePickerViewController *)arg2;
@end

