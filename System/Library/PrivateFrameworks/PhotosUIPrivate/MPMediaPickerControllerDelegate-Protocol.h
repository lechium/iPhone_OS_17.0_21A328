//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUIPrivate/NSObject-Protocol.h>

@class MPMediaItemCollection, MPMediaPickerController;

@protocol MPMediaPickerControllerDelegate <NSObject>

@optional
- (void)mediaPickerDidCancel:(MPMediaPickerController *)arg1;
- (void)mediaPicker:(MPMediaPickerController *)arg1 didPickMediaItems:(MPMediaItemCollection *)arg2;
@end

