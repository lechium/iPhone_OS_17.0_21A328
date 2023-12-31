//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class Application, CUIKCalendarModel, NSDictionary;

@interface ApplicationTest : NSObject
{
    _Bool _useLegacyData;	// 8 = 0x8
    Application *_application;	// 16 = 0x10
    NSDictionary *_options;	// 24 = 0x18
    CUIKCalendarModel *_model;	// 32 = 0x20
}

+ (id)testName;	// IMP=0x004000000003018c
- (void).cxx_destruct;	// IMP=0x0020000000030b14
@property(retain, nonatomic) CUIKCalendarModel *model; // @synthesize model=_model;
@property(retain, nonatomic) NSDictionary *options; // @synthesize options=_options;
@property(retain, nonatomic) Application *application; // @synthesize application=_application;
- (void)setupData;	// IMP=0x00100000000307e1
- (id)extractInitialDateOption;	// IMP=0x00100000000303a5
- (void)runTest;	// IMP=0x0010000000030269
- (id)initWithApplication:(id)arg1 model:(id)arg2 options:(id)arg3;	// IMP=0x001000000003019e

@end

