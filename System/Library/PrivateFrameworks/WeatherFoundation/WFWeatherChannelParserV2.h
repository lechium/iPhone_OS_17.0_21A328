//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCalendar, NSString;

__attribute__((visibility("hidden")))
@interface WFWeatherChannelParserV2 : NSObject
{
    NSCalendar *_calendar;	// 8 = 0x8
}

+ (id)componentsForDailyForecasts;	// IMP=0x001000000000f50b
+ (id)componentsForHourlyForecasts;	// IMP=0x001000000000f398
+ (id)componentsForCurrentForecast;	// IMP=0x001000000000f1b1
+ (unsigned long long)expectedDailyForecastCount;	// IMP=0x001000000000f1a6
+ (unsigned long long)expectedHourlyForecastCount;	// IMP=0x001000000000f19b
- (void).cxx_destruct;	// IMP=0x0000000000011d39
@property(retain, nonatomic) NSCalendar *calendar; // @synthesize calendar=_calendar;
- (id)parseAirQualityData:(id)arg1 location:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000110b4
- (void)parseCommonComponents:(id)arg1 data:(id)arg2;	// IMP=0x0000000000010e95
- (id)parseCurrentCondition:(id)arg1;	// IMP=0x0000000000010846
- (id)parseHourlyForecasts:(id)arg1;	// IMP=0x0000000000010063
- (id)parseDailyForecasts:(id)arg1;	// IMP=0x000000000000f66b
- (unsigned long long)_pressureTrendFromWeatherChannelCode:(id)arg1;	// IMP=0x000000000000f63d
- (id)parseForecastData:(id)arg1 types:(unsigned long long)arg2 location:(id)arg3 locale:(id)arg4 date:(id)arg5 error:(id *)arg6 rules:(id)arg7;	// IMP=0x000000000000ea3c
- (id)parseForecastData:(id)arg1 types:(unsigned long long)arg2 location:(id)arg3 locale:(id)arg4 date:(id)arg5 error:(id *)arg6;	// IMP=0x000000000000ea10
- (id)init;	// IMP=0x000000000000e92d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
