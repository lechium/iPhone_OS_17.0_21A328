//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpeechRecognitionCommandAndControl/CACVoiceOverDescribable-Protocol.h>

@class NSString;

@protocol CACNumberedElement <CACVoiceOverDescribable>
@property(nonatomic) long long badgeIndicatorMask;
@property(nonatomic) long long badgePresentation;
@property(nonatomic) long long arrowOrientation;
@property(retain, nonatomic) NSString *numberedLabel;
@property(readonly, nonatomic) NSString *label;
@property(readonly, nonatomic) struct CGRect interfaceOrientedRectangle;
@property(nonatomic) struct CGRect labelRectangle;
@end

