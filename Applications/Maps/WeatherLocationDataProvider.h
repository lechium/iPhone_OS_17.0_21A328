//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CLLocation, NSHashTable;

@interface WeatherLocationDataProvider : NSObject
{
    NSHashTable *_observers;	// 8 = 0x8
    CLLocation *_location;	// 16 = 0x10
    struct CLLocationCoordinate2D _coordinate;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000001efa20
@property(nonatomic) struct CLLocationCoordinate2D coordinate; // @synthesize coordinate=_coordinate;
- (void)_updateLocation:(id)arg1;	// IMP=0x00100000001ef9d1
- (void)_updateCoordinate:(struct CLLocationCoordinate2D)arg1;	// IMP=0x00100000001ef93a
- (_Bool)_shouldNotifyObservers;	// IMP=0x00100000001ef8d8
- (void)_notifyObserversWeatherLocationDidChange;	// IMP=0x00100000001ef5d3
- (void)removeObserver:(id)arg1;	// IMP=0x00100000001ef5bd
- (void)addObserver:(id)arg1;	// IMP=0x00100000001ef5a7
- (id)init;	// IMP=0x00100000001ef487

@end

