//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AirQualityConditions, NSLayoutConstraint, NSString, UIView, WeatherLocationDataProvider, _MKUILabel, _TtC4Maps32AirQualityConditionsDataProvider;
@protocol AirQualityConditionsViewControllerDelegate;

@interface AirQualityConditionsViewController
{
    _TtC4Maps32AirQualityConditionsDataProvider *_airQualityConditionsDataProvider;	// 8 = 0x8
    WeatherLocationDataProvider *_weatherLocationDataProvider;	// 16 = 0x10
    AirQualityConditions *_airQualityConditions;	// 24 = 0x18
    id <AirQualityConditionsViewControllerDelegate> _delegate;	// 32 = 0x20
    UIView *_contentView;	// 40 = 0x28
    UIView *_aqiCircleView;	// 48 = 0x30
    _MKUILabel *_airQualityLabel;	// 56 = 0x38
    NSLayoutConstraint *_aqiCircleViewHeightConstraint;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00200000006de2a2
@property(retain, nonatomic) NSLayoutConstraint *aqiCircleViewHeightConstraint; // @synthesize aqiCircleViewHeightConstraint=_aqiCircleViewHeightConstraint;
@property(retain, nonatomic) _MKUILabel *airQualityLabel; // @synthesize airQualityLabel=_airQualityLabel;
@property(retain, nonatomic) UIView *aqiCircleView; // @synthesize aqiCircleView=_aqiCircleView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak id <AirQualityConditionsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) AirQualityConditions *airQualityConditions; // @synthesize airQualityConditions=_airQualityConditions;
- (id)_font;	// IMP=0x00100000006de140
- (void)_updateSubviews;	// IMP=0x00100000006dded0
- (void)_setupConstraints;	// IMP=0x00100000006dd3d0
- (void)_createSubviews;	// IMP=0x00100000006dcf44
- (id)_airQualityIndex;	// IMP=0x00100000006dcc53
- (_Bool)_shouldShowAirQualityConditions;	// IMP=0x00100000006dcbed
- (void)airQualityConditionsDataProviderDidChangeAirQualityConditions:(id)arg1;	// IMP=0x00100000006dcbdb
- (void)_toggleAirQualityConditionsVisibility;	// IMP=0x00100000006dcba5
- (void)_preferredContentSizeChanged:(id)arg1;	// IMP=0x00100000006dcb93
- (void)clearSavedLocation;	// IMP=0x00100000006dcb4b
- (void)viewDidLoad;	// IMP=0x00100000006dca1a
- (void)loadView;	// IMP=0x00100000006dc971
- (void)setAirQualityConditions:(id)arg1;	// IMP=0x00100000006dc8f4
- (void)setVisible:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00100000006dc895
- (void)setVisible:(_Bool)arg1;	// IMP=0x00100000006dc881
@property(readonly, nonatomic, getter=isVisible) _Bool visible;
@property(nonatomic, getter=isEnabled) _Bool enabled;
- (id)initWithWeatherLocationDataProvider:(id)arg1;	// IMP=0x00100000006dc734
- (_Bool)_canShowWhileLocked;	// IMP=0x00100000006dc72c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

