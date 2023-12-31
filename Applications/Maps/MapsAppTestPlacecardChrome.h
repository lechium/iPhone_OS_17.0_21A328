//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MUPlaceViewController, SearchInfo;
@protocol MapsAppTestPlacecardChromeDelegate;

@interface MapsAppTestPlacecardChrome
{
    SearchInfo *_searchInfo;	// 8 = 0x8
    id <MapsAppTestPlacecardChromeDelegate> _placecardChromeDelegate;	// 16 = 0x10
    MUPlaceViewController *_placeViewController;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000006a9413
@property(nonatomic) __weak MUPlaceViewController *placeViewController; // @synthesize placeViewController=_placeViewController;
@property(nonatomic) __weak id <MapsAppTestPlacecardChromeDelegate> placecardChromeDelegate; // @synthesize placecardChromeDelegate=_placecardChromeDelegate;
- (void)startPlacecardTest;	// IMP=0x00100000006a8c24
- (void)cleanup:(_Bool)arg1;	// IMP=0x00100000006a8bd7
- (_Bool)runTest;	// IMP=0x00100000006a8802

@end

