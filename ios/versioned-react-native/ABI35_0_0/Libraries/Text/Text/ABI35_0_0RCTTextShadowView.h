/**
 * Copyright (c) Facebook, Inc. and its affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#import <ReactABI35_0_0/ABI35_0_0RCTShadowView.h>

#import "ABI35_0_0RCTBaseTextShadowView.h"

NS_ASSUME_NONNULL_BEGIN

@interface ABI35_0_0RCTTextShadowView : ABI35_0_0RCTBaseTextShadowView

- (instancetype)initWithBridge:(ABI35_0_0RCTBridge *)bridge;

@property (nonatomic, assign) NSInteger maximumNumberOfLines;
@property (nonatomic, assign) NSLineBreakMode lineBreakMode;
@property (nonatomic, assign) BOOL adjustsFontSizeToFit;
@property (nonatomic, assign) CGFloat minimumFontScale;
@property (nonatomic, copy) ABI35_0_0RCTDirectEventBlock onTextLayout;

- (void)uiManagerWillPerformMounting;

@end

NS_ASSUME_NONNULL_END
