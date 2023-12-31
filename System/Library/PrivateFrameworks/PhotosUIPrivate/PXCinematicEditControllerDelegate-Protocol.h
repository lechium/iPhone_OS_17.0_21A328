//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUIPrivate/NSObject-Protocol.h>

@class NSError, PICompositionController, PTCinematographyDecision, PTCinematographyScript;

@protocol PXCinematicEditControllerDelegate <NSObject>
- (void)cineScriptCouldNotInitializeWithError:(NSError *)arg1;
- (void)cineScriptBecameAvailable:(PTCinematographyScript *)arg1;
- (void)disableCinematicUIForLoadingAsset;
- (PICompositionController *)compositionController;

@optional
- (void)didRemoveUserDecision;
- (void)removeUserDecision:(PTCinematographyDecision *)arg1;
@end

