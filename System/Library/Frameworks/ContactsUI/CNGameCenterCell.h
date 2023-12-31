//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UILabel, UIView, UIViewController;
@protocol CNPresenterDelegate;

__attribute__((visibility("hidden")))
@interface CNGameCenterCell
{
    _Bool _showsGameCenterLabel;	// 8 = 0x8
    UILabel *_gameCenterLabel;	// 16 = 0x10
    UIView *_playerViewContainer;	// 24 = 0x18
    UIView *_playerView;	// 32 = 0x20
    NSString *_playerID;	// 40 = 0x28
    UIViewController *_profileViewController;	// 48 = 0x30
    id <CNPresenterDelegate> _presentingDelegate;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000292c53
@property(nonatomic) __weak id <CNPresenterDelegate> presentingDelegate; // @synthesize presentingDelegate=_presentingDelegate;
@property(retain, nonatomic) UIViewController *profileViewController; // @synthesize profileViewController=_profileViewController;
@property(retain, nonatomic) NSString *playerID; // @synthesize playerID=_playerID;
@property(retain, nonatomic) UIView *playerView; // @synthesize playerView=_playerView;
@property(retain, nonatomic) UIView *playerViewContainer; // @synthesize playerViewContainer=_playerViewContainer;
@property(readonly, nonatomic) UILabel *gameCenterLabel; // @synthesize gameCenterLabel=_gameCenterLabel;
@property(nonatomic) _Bool showsGameCenterLabel; // @synthesize showsGameCenterLabel=_showsGameCenterLabel;
- (void)dismissProfileViewController;	// IMP=0x0000000000292ad7
- (void)presentPlayerProfile;	// IMP=0x00000000002928e3
- (void)performDefaultAction;	// IMP=0x00000000002928d1
- (id)variableConstraintsForHorizontalLayout;	// IMP=0x00000000002928c4
- (id)constantConstraintsForHorizontalLayout;	// IMP=0x00000000002928b7
- (id)constantConstraintsForVerticalLayout;	// IMP=0x00000000002928aa
- (id)variableConstraints;	// IMP=0x0000000000291fb5
- (id)labelView;	// IMP=0x0000000000291eaa
- (void)setLabelTextAttributes:(id)arg1;	// IMP=0x0000000000291ea4
- (void)setupViews;	// IMP=0x0000000000291e18
- (void)updateViewsWithCardGroupItem:(id)arg1;	// IMP=0x000000000029187d
- (void)setCardGroupItem:(id)arg1;	// IMP=0x000000000029180f
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00000000002917b1

@end

