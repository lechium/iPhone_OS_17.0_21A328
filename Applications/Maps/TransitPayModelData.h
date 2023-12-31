//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, UIImage;

@interface TransitPayModelData : NSObject
{
    _Bool _isForRemoteDevice;	// 8 = 0x8
    int _suggestionType;	// 12 = 0xc
    NSString *_title;	// 16 = 0x10
    NSString *_subtitle;	// 24 = 0x18
    NSString *_actionTitle;	// 32 = 0x20
    UIImage *_image;	// 40 = 0x28
    NSString *_educationScreenTitle;	// 48 = 0x30
    NSArray *_educationScreenAssetURLs;	// 56 = 0x38
    NSString *_educationScreenText;	// 64 = 0x40
    NSArray *_paymentMethods;	// 72 = 0x48
    NSString *_topUpPassUniqueID;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00100000003dd44f
@property(readonly, nonatomic) _Bool isForRemoteDevice; // @synthesize isForRemoteDevice=_isForRemoteDevice;
@property(readonly, copy, nonatomic) NSString *topUpPassUniqueID; // @synthesize topUpPassUniqueID=_topUpPassUniqueID;
@property(readonly, copy, nonatomic) NSArray *paymentMethods; // @synthesize paymentMethods=_paymentMethods;
@property(readonly, copy, nonatomic) NSString *educationScreenText; // @synthesize educationScreenText=_educationScreenText;
@property(readonly, nonatomic) NSArray *educationScreenAssetURLs; // @synthesize educationScreenAssetURLs=_educationScreenAssetURLs;
@property(readonly, copy, nonatomic) NSString *educationScreenTitle; // @synthesize educationScreenTitle=_educationScreenTitle;
@property(readonly, nonatomic) int suggestionType; // @synthesize suggestionType=_suggestionType;
@property(readonly, nonatomic) UIImage *image; // @synthesize image=_image;
@property(readonly, copy, nonatomic) NSString *actionTitle; // @synthesize actionTitle=_actionTitle;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (id)description;	// IMP=0x00100000003dd0a2
- (_Bool)hasAllNeededText;	// IMP=0x00100000003dcfdb
- (_Bool)canPresentEducationScreen;	// IMP=0x00100000003dcf48
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 actionTitle:(id)arg3 image:(id)arg4 paymentMethod:(id)arg5 topUpPassUniqueID:(id)arg6 isForRemoteDevice:(_Bool)arg7;	// IMP=0x00100000003dcdc1
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 actionTitle:(id)arg3 image:(id)arg4 suggestionType:(int)arg5 paymentMethods:(id)arg6;	// IMP=0x00100000003dccc6
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 actionTitle:(id)arg3 image:(id)arg4 suggestionType:(int)arg5 paymentMethods:(id)arg6 educationScreenTitle:(id)arg7 educationScreenAssetURLs:(id)arg8 educationScreenText:(id)arg9 topUpPassUniqueID:(id)arg10 isForRemoteDevice:(_Bool)arg11;	// IMP=0x00100000003dcb28
- (id)analyticsValue;	// IMP=0x0010000000350334

@end

