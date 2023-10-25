//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LinkPresentation/NSObject-Protocol.h>

@class NSDictionary, PHChange;

@protocol PXPhotoLibraryUIChangeObserver <NSObject>

@optional
- (void)photoLibraryChangesPausedDidChange;
- (void)photoLibraryDidChangeOnMainQueue:(PHChange *)arg1;
- (void)photoLibraryDidChangeOnMainQueue:(PHChange *)arg1 withPreparedInfo:(NSDictionary *)arg2;
- (NSDictionary *)prepareForPhotoLibraryChange:(PHChange *)arg1;
@end
