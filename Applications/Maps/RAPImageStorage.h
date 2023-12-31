//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol RAPImageStorageDelegate;

@interface RAPImageStorage : NSObject
{
    id <RAPImageStorageDelegate> _delegate;	// 8 = 0x8
}

+ (_Bool)removeImageWithImageIdentifier:(id)arg1 directory:(id)arg2;	// IMP=0x00400000004052d8
+ (_Bool)saveImageWithImageIdentifier:(id)arg1 imageData:(id)arg2 directory:(id)arg3;	// IMP=0x00100000004052b3
+ (id)baseFilePath;	// IMP=0x0010000000405092
+ (id)filePathForSubmissionIdentifier:(id)arg1;	// IMP=0x0010000000405014
+ (id)filePathForSubmissionIdentifier:(id)arg1 imageIdentifier:(id)arg2;	// IMP=0x0010000000404f87
- (void).cxx_destruct;	// IMP=0x0020000000405326
- (_Bool)removeImageForSubmissionIdentifier:(id)arg1 imageIdentifier:(id)arg2;	// IMP=0x001000000040519b
- (_Bool)saveImageWithSubmissionIdentifier:(id)arg1 imageIdentifier:(id)arg2 imageData:(id)arg3;	// IMP=0x00100000004050f5
- (id)initWithDelegate:(id)arg1;	// IMP=0x0010000000404f23

@end

