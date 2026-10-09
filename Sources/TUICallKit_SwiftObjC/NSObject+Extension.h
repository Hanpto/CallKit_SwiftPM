// CocoaPods 下 umbrella header 会隐式带 Foundation，SPM 没有；
// 由 tools/pod2spm/publish_source.py 补上
#import <Foundation/Foundation.h>

//
//  NSObject+Extension.h
//  TUIVideoSeat
//
//  Created by WesleyLei on 2022/9/23.
//  Copyright © 2022 Tencent. All rights reserved.
//

NS_ASSUME_NONNULL_BEGIN

@interface NSObject (Extension)

@end

NS_ASSUME_NONNULL_END
