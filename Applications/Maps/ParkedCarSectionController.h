//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapsUI/MUPlaceSectionController.h>

@class ParkedCar;

@interface ParkedCarSectionController : MUPlaceSectionController
{
    ParkedCar *_parkedCar;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000006cd99d
@property(retain, nonatomic) ParkedCar *parkedCar; // @synthesize parkedCar=_parkedCar;
- (void)updateFromParkedCar;	// IMP=0x00100000006cd986
- (id)mapItem;	// IMP=0x00100000006cd912
- (id)initWithParkedCar:(id)arg1;	// IMP=0x00100000006cd879

@end

