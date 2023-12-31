//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, UIColor;

__attribute__((visibility("hidden")))
@interface MUHoursSummaryViewModel : NSObject
{
    _Bool _hideChevron;	// 8 = 0x8
    _Bool _serviceHours;	// 9 = 0x9
    NSString *_titleText;	// 16 = 0x10
    NSString *_hoursText;	// 24 = 0x18
    NSString *_openStateText;	// 32 = 0x20
    UIColor *_openStateColor;	// 40 = 0x28
    NSArray *_AMPMSymbols;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000012c7b4
@property(nonatomic, getter=isServiceHours) _Bool serviceHours; // @synthesize serviceHours=_serviceHours;
@property(nonatomic) _Bool hideChevron; // @synthesize hideChevron=_hideChevron;
@property(retain, nonatomic) NSArray *AMPMSymbols; // @synthesize AMPMSymbols=_AMPMSymbols;
@property(retain, nonatomic) UIColor *openStateColor; // @synthesize openStateColor=_openStateColor;
@property(retain, nonatomic) NSString *openStateText; // @synthesize openStateText=_openStateText;
@property(retain, nonatomic) NSString *hoursText; // @synthesize hoursText=_hoursText;
@property(retain, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
- (id)buildDefaultPlacecardHoursString;	// IMP=0x000000000012c6a7
- (id)init;	// IMP=0x000000000012c641

@end

