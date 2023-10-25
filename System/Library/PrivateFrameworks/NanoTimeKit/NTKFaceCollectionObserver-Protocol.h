//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NanoTimeKit/NSObject-Protocol.h>

@class NTKFace, NTKFaceCollection;

@protocol NTKFaceCollectionObserver <NSObject>

@optional
- (void)faceCollectionDidReset:(NTKFaceCollection *)arg1;
- (void)faceCollectionDidLoad:(NTKFaceCollection *)arg1;
- (void)faceCollectionDidReorderFaces:(NTKFaceCollection *)arg1;
- (void)faceCollection:(NTKFaceCollection *)arg1 didSelectFace:(NTKFace *)arg2 atIndex:(unsigned long long)arg3;
- (void)faceCollection:(NTKFaceCollection *)arg1 didRemoveFace:(NTKFace *)arg2 atIndex:(unsigned long long)arg3;
- (void)faceCollection:(NTKFaceCollection *)arg1 didAddFace:(NTKFace *)arg2 atIndex:(unsigned long long)arg3;
@end
