//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PaperKit/NSObject-Protocol.h>

@class NSItemProvider;

@protocol _UIStickerPickerViewControllerDelegate <NSObject>

@optional
- (_Bool)remoteHandlesRecentsStickerDonation;
- (void)insertStickerFromItemProvider:(NSItemProvider *)arg1 completionHandler:(void (^)(_Bool))arg2;
- (void)stickerPickerViewControllerDidDismiss;
- (void)stickerPickerViewControllerDidLoad;
@end

