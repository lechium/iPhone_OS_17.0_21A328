//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapsUI/NSObject-Protocol.h>

@class MUCallToActionSectionController, MUPresentationOptions, NSString, UIView;

@protocol MUPlaceCallToActionSectionControllerDelegate <NSObject>
- (UIView *)suggestionViewForCallToActionSectionController:(MUCallToActionSectionController *)arg1;
- (void)presentPOIEnrichmentWithPresentationOptions:(MUPresentationOptions *)arg1;
- (void)presentAddPhotosWithPresentationOptions:(MUPresentationOptions *)arg1 entryPoint:(long long)arg2 originTarget:(NSString *)arg3;
@end

